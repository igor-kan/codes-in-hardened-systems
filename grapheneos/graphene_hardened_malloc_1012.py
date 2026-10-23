"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1012."""

def spec_graphene_hardened_malloc_1012() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1012, "quarantine_slabs": 5, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1012():
    s = spec_graphene_hardened_malloc_1012()
    assert s["spec_id"] == 1012
