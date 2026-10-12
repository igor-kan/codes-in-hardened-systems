"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 46."""

def spec_graphene_hardened_malloc_46() -> dict:
    return {"system": "GrapheneOS", "spec_id": 46, "quarantine_slabs": 15, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_46():
    s = spec_graphene_hardened_malloc_46()
    assert s["spec_id"] == 46
