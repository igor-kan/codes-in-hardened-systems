"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 832."""

def spec_graphene_hardened_malloc_832() -> dict:
    return {"system": "GrapheneOS", "spec_id": 832, "quarantine_slabs": 1, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_832():
    s = spec_graphene_hardened_malloc_832()
    assert s["spec_id"] == 832
